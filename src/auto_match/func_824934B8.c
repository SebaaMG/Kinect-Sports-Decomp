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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82490F58();
extern int fn_82522588();
extern unsigned int iStack_2c;


double fn_824934B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  uint uVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  undefined1 auStack_30 [4];
  int iStack_2c;
  longlong lStack_28;
  
  piVar3 = (int *)fn_82522588(auStack_30,*(undefined4 *)**(undefined4 **)(param_1 + 0x5c));
  iVar1 = *(int *)(*piVar3 + 0x2b0);
  if (iStack_2c != 0) {
    fn_822315A0(iStack_2c);
  }
  uVar4 = (iVar1 - *(int *)(param_1 + 0x58)) - 1;
  uVar4 = 0xffffffffU - ((int)uVar4 >> 0x1f) & uVar4;
  uVar2 = fn_82490F58(param_2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  lStack_28 = (longlong)(int)uVar4;
  dVar6 = extraout_f1;
  dVar5 = (double)fn_82490F58(uVar2,*(undefined4 *)(param_2 + 0x14));
  return (double)(float)(dVar6 * (double)lStack_28 + dVar5);
}

