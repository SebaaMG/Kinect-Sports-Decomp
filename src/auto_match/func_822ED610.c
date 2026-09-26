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
extern unsigned int *auStack_70;
extern int fn_822EDDB0();
extern int fn_822EF458();
extern int fn_82F63A08();
extern int fn_82F65148();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


undefined8 *
fn_822ED610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 extraout_f1;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  int iStack_80;
  int iStack_7c;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_70 [112];
  
  iStack_7c = 0;
  iStack_80 = 0;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uVar1 = fn_822EDDB0(param_2,auStack_70,&stack0x00000020,&stack0x00000028,param_5,&iStack_80);
  uVar2 = fn_82F63A08(auStack_70,apuStack_78,uVar1,&iStack_7c);
  uVar1 = extraout_f1;
  if (iStack_80 != 0) {
    uVar1 = fn_82F65148(uVar2,iStack_80 << 2);
  }
  cVar3 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar3 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((apuStack_78[0] == auStack_70) || (iStack_7c != 0)) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = uVar1;
  }
  *param_1 = uStack00000020;
  return param_1;
}

