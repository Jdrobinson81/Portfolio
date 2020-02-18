using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DemoProgram.MenuSelect;
using System.IO;
using System.Threading;

namespace DemoProgram.Roll20
{
    //This is a dice rolling class
    public class RollEm
    {
        public bool check = true;
        public void KeepRollinRollinRollin()
        {
            while (check == true)
            {
                //Get the number of sides on the die and the number of times to roll it
                Console.WriteLine("How many sides are on the die?\n");
                int Die = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("How many times do you wish to roll?\n");
                int Roll = Convert.ToInt32(Console.ReadLine());

                //Creat a new instance of the random generator
                Random rand = new Random();

                //Loop through the rolls
                for (int j = 0; j < Roll; j++)
                {
                    //create a next statement to create new results
                    int ShowIt = rand.Next(1, Die);
                    Console.WriteLine(ShowIt + " ");
                    //Put the thread to sleep to avoid generating the same results continuously
                    Thread.Sleep(200);
                }
                //Ask if they need another roll. I will later add options to return to menu and error checking
                Console.WriteLine("Another Roll? (y/n)\n");
                string yesno = Console.ReadLine();
                if (yesno == "n")
                {
                    check = false;
                }
            }

            Console.WriteLine("Press any key to exit\n");
            Console.ReadLine();

        }
    }
}
