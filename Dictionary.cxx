#include <iostream>
using namespace std;

int main() {
    string search;

    cout << "Say: ";
    getline(cin, search); 

    if (search == "Acceleration") {
        cout << "the rate at which an object's velocity changes over time; includes both speed and direction.";
    } 
    else if (search == "Accuracy") {
        cout << "the measurement of closeness to a true or standard value";
    } 
    else if (search == "Additive Manufacturing") {
        cout << "A computer-led manufacturing process, also known as 3D printing, in which a machine layers materials, such as plastic, liquid and metal powder, to build three-dimensional objects.";
    } 
    else if (search == "Agitator") {
        cout << "A device, also known as a mixer that puts objects into motion thrpugh shaking or stirring";
    } 
    else if (search == "AI") {
        cout << "acronym for Artificial Intelligence, is the demonstration of cognition by computers and machines";
    } 
    else if (search == "Brittleness") {
        cout << "a mechanical property of an object that measures the degree to which a material will fracture without significant deformation when subjected to stress.";
    } 
    else if (search == "CAD") {
        cout << "Computer-aided Design is the digital creation of two-dimensional drawings and three-dimensional models using a computer system.";
    } 
    else if (search == "CAM") {
        cout << "Computer-aided Manufacturing is a manufacturing method in which software and computer-controlled machines execute high-precision tasks to build products.";
    } 
    else if (search == "CNC") {
        cout << "Computer Numerical Control is a computer-controlled manufacturing process in which progamming dictates tasks to a wide range of factory tools and machinery, from drills to lathes.";
    } 
    else if (search == "Code Compliance") {
        cout << "is the adherance to a standardized area codes, from design standards to specifications and ordinance.";
    } 
    else if (search == "Cement") {
        cout << "a building material that is a powder made of a mixture of calcined limestone and clay; used with water and sand or gravel to make concrete and mortar.";
    } 
    else if (search == "Circuit") {
        cout << "an electric device providing path for current to flow.";
    } 
    else if (search == "Component") {
        cout << "one of the individual parts making up a larger entity";
    } 
    else if (search == "Sketch") {
        cout << "preliminary drawing dor later elaboration";
    } 
    else if (search == "Software") {
        cout << "written programs operating on a computer system";
    } 
    else if (search == "Solar energy") {
        cout << "energy from the sun that is concerted into thermal or electrical energy";
    } 
    else if (search == "Speed") {
        cout << "a rate at which something happens";
    } 
    else if (search == "Fulcrum") {
        cout << "the pivot about which a lever turns.";
    } 
    else if (search == "Gear") {
        cout << "a toothed wheel that engages another toothed mechanism";
    } 
    else if (search == "Heat") {
        cout << "a form of energy transferred by a difference in temperature";
    } 
    else if (search == "Hydraulics") {
        cout << "study of mechanics of fluids";
    } 
    else if (search == "Impact") {
        cout << "a forceful consequence; a strong effect";
    } 
    else if (search == "Inclined plane") {
        cout << "a simple machine for elevating objects";
    } 
    else if (search == "Constraint") {
        cout << "a limitation or restriction";
    } 
    else if (search == "Construction") {
        cout << "the act of building something";
    } 
    else if (search == "Lever") {
        cout << "a simple machine giving a mechanical advantage on a fulcrum";
    } 
    else if (search == "Load") {
        cout << "weight to be borne or conveyed";
    } 
    else if (search == "Machine") {
        cout << "a device for overcoming resistance by applying force";
    } 
    else if (search == "Momentum") {
        cout << "the product of a body's mass and its velocity";
    } 
    else if (search == "Motion") {
        cout << "a change of position not entailing a change of location";
    } 
    else {
        cout << "Error na boss";
    }

    return 0;
}