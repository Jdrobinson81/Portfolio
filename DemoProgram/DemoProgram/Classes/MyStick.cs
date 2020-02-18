using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DemoProgram.MenuSelect;

namespace DemoProgram.Stick
{
    public class MyStick
    {
        public void StartStick()
        {
            /* System.Diagnostics allows you to access processes and events. Such as the process for IE */
            System.Diagnostics.Process proc = new System.Diagnostics.Process();

            /* EnableRaisingEvents is whether or not to trigger an event when a process is exited. Default boolean is false but better safe than sorry. */
            proc.EnableRaisingEvents = false;

            /* Enables you to specify values used when starting a process */
            proc.StartInfo.FileName = "https://www.youtube.com/watch?v=3Xl0Qr0uXuY";

            proc.Start();
        }
    }
}
