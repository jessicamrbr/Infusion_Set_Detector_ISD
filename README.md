# Infusion Set Detector - ISD

Project orientation: Paulo Schor e Milton Yogi
Development: Jéssica Moura Ribeiro

## Summary
 
Advances in technology and the diffusion of basic computerized electronics among less specialized people, allows the creation of small useful equipment. Based on this cultural line, we try to respond to a proposed challenge in the hospital area, implement hardware that checks the saline flow for a team and warns about its interruption.

The developed system allows the coupling to the equipment, a sensor that has performed the check of the presence of the serum. So when the liquid substance does not reflect, refracts or absorbs the sensor beam, a difference in the expected signal is perceived, the device in turn emits an audible and visual alert.

The device was built with low cost components and easy access, reducing the final value. Among them a micro-controller, acting as a low-end computer processor. The micro-controller, which besides being a fundamental part of the circuit, enables future integrations to other computer systems in the hospital environment, allowing new metrics such as average time of infusions.

 
The coating and protection structure of the components, made in a 3D printer, plays an important role in the connection with the serum equipment, allowing the system to be safely and reliably coupled.


This system has the purpose of giving greater security to the health professional, informing if something unexpected happens. Another purpose is to comfort the patient by reducing waiting time for withdrawal of the infusion system.


## Introduction and characterization of the problem
 
During the cataract surgery, a special serum is used to maintain the tone of the eye during aspiration of the lens. It is vitally important that the surgical team keep an eye on the amount of available serum, alerting to cases where the serum is ending. If the serum ends during cataract aspiration, the eye may undergo a sudden decompression, with collapse of the anterior chamber and potential intraocular damage. For this reason, this task becomes more of an element of attention to risk during surgery.


Most medical consultations in emergency and first aid institutions carry the administration of intravenous access medication. During this procedure, the patient is rested for a fixed time, accommodated and occupying a space in the environment, which according to the patient's capacity, can generate service queues. One of the variables of comfort of the patient and cost to institution is the time that the same one must remain in the observation / infirmary. In addition to the time involved in the process, the intravenous infusion generates concern of the patient and companions, who continuously monitor their residual volume. There is no agility in the withdrawal or substitution of the medication, there is an increase of anxiety on the part of the patient, and an increase in the time of rotation of the place. In addition, the health team's attention to this level of medication should be reduced.


The equipment for serum (Figure 1) includes a set of accessories, consisting of a punch, dripper, drip chamber, drug injection area, flow regulator and flexible tube. It should be used in the infusion of serum, with or without medicines, including the two situations presented. [1]

![Figure 1 - Serum equipment](https://raw.githubusercontent.com/jessicamrbr/Infusion_Set_Detector_ISD/master/Figures/Serum_equipment.png){:width="50%"}

Figure 1 - Serum equipment

## Justification
 
A serum flow sensor, with visual and audible alerts, should make dependent surgical procedures safer, complementing human attention for the task of warning, and in some cases even being able to replace it.


The automation in the constant conference of the end of medication application, should reduce the total time of stay of the patient in the ward, bringing more comfort and less stress to own and the team, besides reducing the cost of occupying the space for the hospital institution.

 
## Goals and objectives
 
The overall goal of the research was to develop, manufacture and test a small, simple, low-cost device that can automate the testing of serum flow by a team. To achieve this goal, secondary goals were defined:


* The design and testing of an infrared light emission system, evaluating signal behavior, measuring reflection, refraction and wave absorption rates, to establish a pattern that indicates the presence or absence of serum within the equipment Invasive.
* The development and testing of a system that uses the results of the previous objective to, using an algorithm, visually and soundly warn the state of the flow in the equipment.
* The creation of a product prototype, resulting from previous analyzes, that is robust and secure, for future implementation and testing.
 
Page Break
 
Methodology and Strategy of Action
The electronic circuit was composed of one in