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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4FB68();
extern int fn_82EDF8B8();


int * fn_82E99D70(int *param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = (int)uVar1 >> 0x1f;
  if (param_4 == 1) {
    *(undefined2 *)(param_3 + 0xe) = 0xc;
    *(undefined4 *)(param_3 + 0x10) = 0x31313450;
  }
  piVar4 = (int *)fn_8265C940(0x3980,0x248c8000);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
    *param_1 = 1;
  }
  else {
    piVar4[0xe42] = 0;
    piVar4[0xe41] = 0;
    piVar4[0xe44] = -1;
    piVar4[0xe43] = -1;
    fn_82EDF8B8();
    fn_82E4FB68(param_1,param_2,param_3,piVar4,0,CONCAT44(uVar2,(uVar1 ^ uVar3) - uVar3),param_5
                   );
    if (*param_1 == 0) {
      piVar4[0xe46] = 0;
    }
    else {
      if (*piVar4 != 0) {
        fn_8265C990(*piVar4,0x248c8000);
        *piVar4 = 0;
      }
      if (piVar4[1] != 0) {
        fn_8265C990(piVar4[1],0x248c8000);
        piVar4[1] = 0;
      }
      fn_8265C990(piVar4,0x248c8000);
      piVar4 = (int *)0x0;
    }
  }
  return piVar4;
}

