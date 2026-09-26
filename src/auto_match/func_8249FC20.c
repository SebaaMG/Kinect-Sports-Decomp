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
extern int fn_8249ABC0();
extern int fn_8249F490();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8249FC20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uVar4 = 0;
  if (param_2[8] < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82F4EBE8();
  }
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 4))(piVar2), iVar3 != 0)) {
    fn_82F52188(auStack_40,piVar2,1);
    iVar3 = fn_8249ABC0();
    iVar3 = *(int *)(iVar3 + 0xec);
    iVar1 = *(int *)(iVar3 + 0x34);
    if (*(int *)(iVar3 + 0x30) == iVar1) {
      uStack_50 = *(undefined4 *)(iVar3 + 0x10);
      uStack_4c = *(undefined4 *)(iVar3 + 0x14);
      uStack_48 = *(undefined4 *)(iVar3 + 0x18);
      uStack_44 = *(undefined4 *)(iVar3 + 0x1c);
    }
    else {
      uStack_50 = *(undefined4 *)(iVar1 + -0x14);
      uStack_4c = *(undefined4 *)(iVar1 + -0x10);
      uStack_48 = *(undefined4 *)(iVar1 + -0xc);
      uStack_44 = *(undefined4 *)(iVar1 + -8);
    }
    uVar4 = fn_8249F490(&uStack_50);
  }
  if (lbl_821CC160 < *(float *)((*param_2 + 1) * 0x24 + param_1)) {
    uVar4 = 0;
  }
  return uVar4;
}

