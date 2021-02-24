#include <iostream>

#include "Logger.hpp"

void someDummyProcess(Logging::Logger &logger) {
    int wait = rand() % 5;
    sleep(wait);
    logger.write_log(Logging::Severity::INFO, "Just a message " + std::to_string(wait) + " seconds later.");
}

int main(int argc, char* argv[])
{
    Logging::Logger logger;
    
    logger.setSettings({
        "logs/",
        "my_log_file",
        100000000,
        100,
        false,
        Logging::Edit::TimestampTemplate::NONE,
        Logging::Edit::LogTemplate::SEV_MSG
    });

    logger.init();

    logger.write_log( Logging::Severity::INFO, "My first log example." );

    /* logger.write_log(Logging::Severity::TRACE, "This is a TRACE log.");
    logger.write_log(Logging::Severity::INFO, "This is a INFO log.");
    logger.write_log(Logging::Severity::DEBUG, "This is a DEBUG log.");
    logger.write_log(Logging::Severity::WARNING, "This is a WARNING log.");
    logger.write_log(Logging::Severity::ERROR, "This is a ERROR log.");
    logger.write_log(Logging::Severity::FATAL, "This is a FATAL log.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::TIME_TEMPLATE, Logging::Edit::TimestampTemplate::TIME);
    logger.write_log(Logging::Severity::INFO, "Time is now being printed.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::TIME_TEMPLATE, Logging::Edit::TimestampTemplate::CALENDAR_TIME);
    logger.write_log(Logging::Severity::INFO, "Calendar + Time is now being printed.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::TIME_TEMPLATE, Logging::Edit::TimestampTemplate::CALENDAR_YEAR_TIME);
    logger.write_log(Logging::Severity::INFO, "Calendar + Year + Time is now being printed.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::TIME_TEMPLATE, Logging::Edit::TimestampTemplate::TIME);
    logger.setSetting(Logging::Edit::Setting::LOG_TEMPLATE, Logging::Edit::LogTemplate::SEV_MSG);
    logger.write_log(Logging::Severity::INFO, "Log without timestamp.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::LOG_TEMPLATE, Logging::Edit::LogTemplate::TIME_SEV_MSG);
    logger.write_log(Logging::Severity::INFO, "Timestamp on the left of the severity level.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::LOG_TEMPLATE, Logging::Edit::LogTemplate::SEV_TIME_MSG);
    logger.write_log(Logging::Severity::INFO, "Timestamp on the right of the severity level.");

    logger.write_log(Logging::Severity::INFO, "");
    logger.setSetting(Logging::Edit::Setting::LOG_TEMPLATE, Logging::Edit::LogTemplate::SEV_MSG_TIME);
    logger.write_log(Logging::Severity::INFO, "Timestamp on the end of the log.");

    logger.write_log<Logging::Edit::TextType::HEADER>(Logging::Severity::INFO, "This is a small header"); */

    

    /* logger.write_log<Logging::Edit::TextType::HEADER>(Logging::Severity::INFO, "This is a small HEADER test.");
    logger.write_log<Logging::Edit::TextType::HEADER>(Logging::Severity::INFO, "This is a huuuuuuuuuuuge HEADER test, to check if the double line is correct.");

    logger.write_log<Logging::Edit::TextType::SUB_HEADER>(Logging::Severity::INFO, "This is a small SUB-HEADER test.");
    logger.write_log<Logging::Edit::TextType::SUB_HEADER>(Logging::Severity::INFO, "This is a huuuuuuuuuuuuuuge SUB-HEADER test, to check if the double line is correct.");

    logger.write_log(Logging::Severity::INFO, "This is a small info test.");
    logger.write_log(Logging::Severity::INFO, "This is another test to make sure logs with 2 or more lines are correctly displayed! This is another test to make sure logs with 2 or more lines are correctly displayed! This is another test to make sure logs with 2 or more lines are correctly displayed!");

    logger.write_log(Logging::Severity::TRACE, "This is a small trace test.");
    logger.write_log(Logging::Severity::DEBUG, "This is a small debug test.");
    logger.write_log(Logging::Severity::WARNING, "This is a small warning test.");
    logger.write_log(Logging::Severity::ERROR, "This is a small error test.");
    logger.write_log(Logging::Severity::FATAL, "This is a small fatal test.");
 */
    return 0;
}

/*
Haps Simulator

[Article] https://ieeexplore.ieee.org/document/8396531  -> Modelica OOP? "The acausal and object-oriented modeling language Modelica has been used to create the integrated simulation model, enabling a modular and detailed modeling approach."

Será isto?
https://www.simulationx.com/simulation-software/experts/modelica-simulation.html
ou isto?
https://openmodelica.org/uncategorised/191-omsimulator


[Web Site] https://www.atlanticmicrowave.com/application/haps-high-altitude-pseudo-satellite-testing

https://www.atlanticmicrowave.com/news/2021/02/bench-mounted-satellite-simulator-equipment

https://www.atlanticmicrowave.com/markets/satellite-communications

Sao apenas produtos/hardware que se pode comprar para simular?


Drones Simulator -> The best ones are paid, and are not opensource...

[Software] https://www.dji.com/pt/simulator  -> uff

[Software] https://zephyr-sim.com/ -> Zephyr

[GitHub OPENSOURCE!!] https://github.com/microsoft/AirSim -> You would have to understand the code to manage whatever else you want.

Other opensources... But not smelling that good... https://opensource.com/article/18/2/drone-projects


Last resource...
> Develop a simulation on Unity / Unreal Engine 4.
What would this imply? Lots of time developing the scene... Simulating the physics more precisely for more relevant results...


*/