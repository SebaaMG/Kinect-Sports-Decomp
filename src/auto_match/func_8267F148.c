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
extern int fn_8267C8D8();
extern int fn_8267CB08();
extern int fn_8267CB10();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


undefined8 fn_8267F148(int param_1,longlong param_2)

{
  int iVar1;
  int aiStack_30 [12];
  
  iVar1 = (int)param_2;
  if (iVar1 != 0) {
    fn_8267C8D8(param_1 + 0x18);
    if ((longlong)((ulonglong)*(uint *)(param_1 + 0x14) - param_2) < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar1;
    }
    if (iVar1 == 1) {
      fn_8267CB08();
    }
    else {
      fn_8267CB10(param_1 + 0x2c);
    }
    aiStack_30[0] = 0;
    fn_8267D7C8(param_1,aiStack_30);
    fn_8267D9C0(param_1 + 0x18);
    iVar1 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      fn_8267ECD0(aiStack_30[0]);
      fn_8267EC58(iVar1);
    }
  }
  return 1;
}

