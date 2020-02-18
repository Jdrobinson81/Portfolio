using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Threading;
using DemoProgram.MenuSelect;

/*This is a job demo program owned by Jimmy Robinson and is intended only to be a free program for job interview demonstrations
 * It is not to be sold under any circumstances. */
namespace DemoProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            //Keeping main clean with as little code as possible. Instead much of the routing is done through a menu class.
            Menu menu = new Menu();
            menu.MenuRun();
        }
    }
}
