#ifndef STATE_H_
#define STATE_H_

// Macro definition to create state functions
#define STATE_define(state) void st_##state()

// Macro to easily call state functions
#define STATE(state) st_##state



#endif /* STATE_H_ */