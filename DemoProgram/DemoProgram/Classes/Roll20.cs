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
    public class RollEm
    {
        public bool check = true;

        public void KeepRollinRollinRollin()
        {
            while(check==true)
            {
                Console.WriteLine("How many sides are on the die?\n");
                int Die = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("How many times do you wish to roll?\n");
                int Roll = Convert.ToInt32(Console.ReadLine());

                Random rand = new Random.Random();

                for(int c=0; c<Roll; c++)
                {
                    int convertIt = Convert.ToInt32(Console.WriteLine(rand.Next(1, Die)));
                    Thread.Sleep(200);
                }
                Console.WriteLine("Do you wish to roll again? Y or N\n");
                string again = Console.ReadLine();
                if(again == n)
                {
                    check=false;
                }
                if(again == y)
                {
                    check=true;
                }
                else
                {
                    Console.WriteLine("Please choose either y or n\n");
                }
            }
        }
    }
}
