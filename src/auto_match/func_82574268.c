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
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256B398();
extern int fn_8256B658();
extern int fn_8259C738();
extern int fn_82A1BB18();


void fn_82574268(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 auStack_40 [16];
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  piVar3 = *(int **)(iVar2 + 0x48);
  if (0 < *(int *)(*piVar3 + 0x1c)) {
    iVar8 = 0;
    do {
      iVar4 = *(int *)(iVar8 + *(int *)(iVar2 + 0x50) + 0x14);
      if (iVar4 != 0) {
        uVar6 = fn_82569B10();
        fn_82549610(auStack_40,uVar6);
        bVar1 = *(byte *)(iVar4 + 0x28);
        bVar5 = bVar1 >> 6 & 1;
        if ((bVar5 == 0) && (param_2 != 0)) {
          *(byte *)(iVar4 + 0x28) = ((byte)param_2 & 1) << 6 | bVar1 & 0xbf;
          fn_8256B398(iVar4);
        }
        else if ((bVar5 != 0) && (param_2 == 0)) {
          *(byte *)(iVar4 + 0x28) = bVar1 & 0xbf;
          fn_8256B658(iVar4);
        }
        *(byte *)(iVar4 + 0x28) = ((byte)param_2 & 1) << 6 | *(byte *)(iVar4 + 0x28) & 0xbf;
        fn_82A1BB18();
        fn_8259C738(auStack_40[0]);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar7 < *(int *)(*piVar3 + 0x1c));
  }
  return;
}

