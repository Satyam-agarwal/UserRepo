public class Puppy {
   int puppyAge = 0;

   public Puppy(String name) {
      // This constructor has one parameter, name.
      System.out.println("Name chosen is :" + name );
   }

   public void setAge( int age ) {
      puppyAge = age;
   }

   public void getAge( ) {
      System.out.println("Puppy's age is :" + puppyAge );
      
   }

   public static void main(String []args) {
      /* Object creation */
      Puppy myPuppy = new Puppy( "tommy" );
      Puppy myPuppy2 = new Puppy( "labra" );

      /* Call class method to set puppy's age */
      myPuppy.setAge( 2 );
      myPuppy2.setAge(5);


      /* Call another class method to get puppy's age */
      myPuppy.getAge( );
      myPuppy2.getAge( );

      /* You can access instance variable as follows as well */
      System.out.println("Variable Value :" + myPuppy.puppyAge );
   }
}