import './App.css';

function App() {
  return (
    <div>
      <nav className="navbar background">
        <ul className="nav-list">
          <div className="logo">
            <img
              src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20210420155809/gfg-new-logo.png"
              alt="GFG logo"
            />
          </div>
          <li><a href="#courses">Courses</a></li>
          <li><a href="#tutorials">Tutorials</a></li>
          <li><a href="#jobs">Jobs</a></li>
          <li><a href="#student">Student</a></li>
        </ul>

        <div className="rightNav">
          <input
            type="text"
            name="search"
            id="search"
          />
          <button className="btn btn-sm">Search</button>
        </div>
      </nav>

      <section className="section">
        <div className="box-main">
          <div className="firstHalf">
            <h1 className="text-big">
              7 Best Tips To Speed Up Your Job Search in 2022
            </h1>
            <p className="text-small">
              Hunting down a relevant job requires proper techniques for
              showcasing your potential to the employer. But with the advent of
              COVID-19, it has become a bit challenging and competitive to
              reach out for your dream job. Many individuals have lost their
              jobs during these times, and on the other hand, freshers are
              facing difficulties while applying for a new job. But there is no
              need for panic, you can change your ways and streamline things in
              a way that you get a proper result.
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">JavaScript Tutorial</h1>
            <p className="text-small">
              JavaScript is the worlds most popular lightweight, interpreted
              programming language. It is also known as a scripting language
              for web pages. It is well-known for the development of web pages,
              and many non-browser environments also use it. JavaScript can be
              used for Client-side as well as Server-side development.
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">Java Programming Language</h1>
            <p className="text-small">
              When compared with C++, Java codes are generally more
              maintainable because Java does not allow many things which may
              lead to bad/inefficient programming if used incorrectly. For
              example, non-primitives are always references in Java. So we
              cannot pass large objects (like we can do in C++) to functions,
              we always pass references in Java. One more example, since there
              are no pointers, bad memory access is also not possible. When
              compared with Python, Java kind of fits between C++ and Python.
              The programs written in Java typically run faster than
              corresponding Python programs and slower than C++. Like C++,
              Java does static type checking, but Python does not.
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">What is Machine Learning?</h1>
            <p className="text-small">
              Machine Learning is the field of study that gives computers the
              capability to learn without being explicitly programmed. ML is
              one of the most exciting technologies that one would have ever
              come across. As it is evident from the name, it gives the computer
              the ability to learn, making it more similar to humans. Machine
              learning is actively being used today, perhaps in many more places
              than one would expect.
            </p>
          </div>
        </div>
      </section>

      <footer className="footer">
        <p className="text-footer">
          Copyright ©- All rights are reserved
        </p>
      </footer>
    </div>
  );
}

export default App;