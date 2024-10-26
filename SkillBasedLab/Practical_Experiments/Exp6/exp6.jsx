import './App.css';

function App() {
  return (
    <div>
      <nav className="navbar background">
        <ul className="nav-list">
          <div className="logo">
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
              header 1
            </h1>
            <p className="text-small">
              para 1
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">header 2</h1>
            <p className="text-small">
              para 2
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">header 3</h1>
            <p className="text-small">
              para 3
            </p>
          </div>
        </div>
      </section>

      <section className="section">
        <div className="box-main">
          <div className="secondHalf">
            <h1 className="text-big" id="program">header 4</h1>
            <p className="text-small">
              para 4
            </p>
          </div>
        </div>
      </section>

      <footer className="footer">
        <p className="text-footer">
          bottom
        </p>
      </footer>
    </div>
  );
}

export default App;