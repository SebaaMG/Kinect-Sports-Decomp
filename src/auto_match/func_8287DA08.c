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
extern int fn_825089A0();
extern int fn_8287D6D8();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int lbl_83211894;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8287DA08(int param_1,undefined8 param_2,int param_3,char param_4)

{
  char cVar3;
  int *piVar2;
  undefined8 uVar1;
  undefined4 uStack0000001c;
  int aiStack_30 [12];
  
  uStack0000001c = (undefined4)param_2;
  cVar3 = fn_828821A0(param_2);
  if ((cVar3 == '\0') && (cVar3 = fn_82882218(param_2), cVar3 == '\0')) {
    fn_8287D6D8(aiStack_30,param_1 + 0xf0,&stack0x0000001c);
    *(int *)(aiStack_30[0] + 0x78) = *(int *)(aiStack_30[0] + 0x78) + 1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    if (param_4 != '\0') {
      *(int *)(aiStack_30[0] + 0x5c) = *(int *)(aiStack_30[0] + 0x5c) + 1;
      lbl_83211894 = lbl_83211894 + 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    *(int *)(aiStack_30[0] + 0xe0) = *(int *)(aiStack_30[0] + 0xe0) + param_3 + 0x2c;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + param_3 + 0x2c;
    piVar2 = (int *)fn_825089A0();
    uVar1 = (**(code **)(*piVar2 + 0xc))();
    *(undefined8 *)(aiStack_30[0] + 200) = uVar1;
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}

