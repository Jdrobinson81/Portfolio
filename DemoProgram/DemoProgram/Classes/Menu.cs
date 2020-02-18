using System;
using DemoProgram.Roll20;
using DemoProgram.Stick;

namespace DemoProgram.MenuSelect
{
    public class Menu
    {
        public bool check = true;
        //This is the menu method to direct the user to the correct options
        public int MenuRun()
        {
            while (check == true)
            {
                Console.WriteLine("This is a demo program for job interviews\n");
                Console.WriteLine("Menu\n" + "1) My Stick\n" + "2) Dice Roller\n" + "3) Exit\n");
                int number = Convert.ToInt32(Console.ReadLine());

                if (number == 1)
                {
                    //This creates a new instance of MyStick and calls on the StartStick method
                    MyStick stick = new MyStick();
                    stick.StartStick();
                    check = false;
                }
                if (number == 2)
                {
                    //This creates a new instance of RollEm and calls the KeepRollin method...yes its a Limp Bizkit joke.
                    RollEm roll = new RollEm();
                    roll.KeepRollinRollinRollin();
                    check = false;
                }
                if (number == 3)
                {
                    //This option is for exiting the program
                    Console.WriteLine("Have a wonderful day. Press any key to exit\n");
                    Console.ReadLine();
                    check = false;
                }
                else
                {
                    //This is in case they choose an option not on the list
                    Console.WriteLine("Please choose a number option from the menu\n");
                }
            }
            return 1;
        }
    }
}
