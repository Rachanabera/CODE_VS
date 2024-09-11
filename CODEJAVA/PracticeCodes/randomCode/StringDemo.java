class StringDemo{
    public static void main(String args[]){
        String s0 = "JAVA PROGRAM    ";
        String s1="Java Program    ";
        String s3=" Welcome To ";
        System.out.println("String s0:" + s0);
        System.out.println("String s1:" + s1);
        System.out.println("String s3:" + s3);

        //TO FIND LENGTH OF A STRING
        System.out.println("Length of String sl:" +s1.length());
        
        //TO FIND CHARACTER AT SPECIFIC INDEX
        System.out.println("Character at Index 2 in String s1:" + s1.charAt(2));
        
        //TO FIND INDEX OF FIRST CHARACTER OCCURRENCE
        System.out.println("First occurrence of Character 'a' in String s1 :"+s1 .indexOf("a"));
        
        //TO FIND INDEX OF LAST CHARACTER OCCURRENCE
        System.out.println("Last occurrence of Character 'a' in String sl :"+s1.lastIndexOf("a"));
        
        //TO FIND SUBSTRING FROM SPECIFIC INDEX
        int start = 5, end = 8;
        char A[] = new char[end-start];
        s1.getChars(start,end, A, 0);
        String s2=new String(A);
        System.out.println("String s2:" + s2);

        //TO CONVERT STRING TO CHARACTER ARRAY
        A = s1.toCharArray();
        System.out.print("String Conversion into Array:");
        for(int i = 0; i<A.length; i++){
            System.out.print(A[i] + " ");
        }
        System.out.println();

        //TO FIND OUT SUBSTRING
        System.out.println("Sub-String of String s1 from Index 5:" + s1.substring(5));
        System.out.println("Sub-String of String s1 from Index 9 to Index 12:" + s1.substring(9,12));
        
        //TO COMPARE TWO STRINGS FOR EQUALITY
        if(s1.equals(s2)){
            System.out.println("Compare String s1 and s2 for Equality: " + s1 + " == " + s2);
        } else {
            System.out.println("Compare String s1 and s2 for Equality: " + s1 + " != " + s2);
        }

        //TO COMPARE TWO STRINGS WITH IGNORE CASE
        if(s1.equalsIgnoreCase(s0)){
            System.out.println("Compare String s1 and s0 with Ignore Case: " + s1 + " == " + s0);
        } else {
            System.out.println("Compare String s1 and s0 with Ignore Case: " + s1 + " != " + s0);
        }

        //TO COMPARE TWO STRINGS
        int a=s2.compareTo(s1);
        System.out.println("Comparison Result of String s2 and s1:" + a);
        
        //TO CONCAT TWO STRINGS
        System.out.println("Concatenate String s3 and s1 :" + s3.concat(s1));
        
        //TO REMOVE LEADING AND TRAILING WHITE SPACES
        System.out.println("Remove Leading and Trailing Spaces of String s3:" + s3.trim());

        //TO REPLACE ONE CHARACTER BY OTHER
        System.out.println("Replace character A with a in String s0:" + s0.replace('A','a'));
        
        //CONVERT TO LOWER CASE
        System.out.println("Convert String sl into Lower case:" + s1.toLowerCase());
        
        //CONVERT TO UPPER CASE
        System.out.println("Convert String s1 into upper case:" + s1.toUpperCase());
    }
}