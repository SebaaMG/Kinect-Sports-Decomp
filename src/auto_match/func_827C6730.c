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
extern unsigned int *auStack_38;
extern int fn_827C6280();
extern int fn_82F68CC0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_827C6730(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [24];
  int *piStack_20;
  
  uVar1 = param_1[0x57];
  uStack_40 = *(undefined4 *)param_1[6];
  uStack_3c = ((undefined4 *)param_1[6])[1];
  fn_82F68CC0(auStack_38,(ulonglong)uVar1 + 0xc,0x18);
  piStack_20 = param_1;
  cVar2 = fn_827C6280(&uStack_40);
  if (cVar2 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)param_1[6] = uStack_40;
  *(undefined4 *)(param_1[6] + 4) = uStack_3c;
  fn_82F68CC0((ulonglong)uVar1 + 0xc,auStack_38,0x18);
  return;
}

