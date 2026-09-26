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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822DB770();
extern int fn_822DBA58();
extern int fn_8265CAA0();
extern unsigned int uStack_34;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_822DB628(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar2;
  int *piVar3;
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  int aiStack_50 [2];
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  piVar2 = (int *)fn_822DB770(auStack_70,param_3);
  piVar3 = (int *)fn_822DB770(auStack_60,piVar2);
  fn_822DB770(aiStack_50,piVar3);
  uStack_44 = 1;
  if ((8 < (uint)piVar3[2]) && (*piVar3 != 0)) {
    fn_8265CAA0();
  }
  fn_822DB770(auStack_40,aiStack_50);
  uStack_34 = uStack_44;
  if ((8 < uStack_48) && (aiStack_50[0] != 0)) {
    fn_8265CAA0();
  }
  if ((8 < (uint)piVar2[2]) && (*piVar2 != 0)) {
    fn_8265CAA0();
  }
  uVar1 = fn_822DBA58(param_1,param_2,auStack_40);
  if ((8 < (uint)param_3[2]) && (*param_3 != 0)) {
    fn_8265CAA0();
  }
  return uVar1;
}

