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
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_822CF260();
extern int fn_822E0E38();
extern int fn_82365BD8();
extern int fn_824D6498();


undefined8 fn_822E0BE8(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int in_r9;
  undefined1 auStack_68 [104];
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  if ((in_r9 == 0) && (*(int *)(iVar1 + 0x340) == 0)) {
    fn_822CF260(iVar1,0);
  }
  fn_82365BD8(auStack_68,param_2);
  fn_822E0E38();
  uVar3 = fn_824D6498(uVar2,param_3);
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0(*(int *)(param_2 + 4));
  }
  return uVar3;
}

