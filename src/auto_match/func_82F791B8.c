typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F68240();
extern int fn_82F79028();
extern int fn_82F79400();
extern unsigned int lbl_831BC2A4;


double fn_82F791B8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = param_1 + param_2;
  if (lbl_831BC2A4 == 0) {
    dVar2 = (double)fn_82F79028(param_1,param_2,dVar2,1);
  }
  else {
    puVar1 = (undefined4 *)fn_82F68240(param_3,param_3);
    *puVar1 = 0x21;
    fn_82F79400(param_6,0xffffffffc007feff);
  }
  return dVar2;
}

