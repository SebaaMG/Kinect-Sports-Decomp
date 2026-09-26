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
extern int fn_8225C900();
extern int fn_8225CB20();
extern int fn_8225CDB0();
extern int fn_8225DEB0();
extern int fn_8225DFB0();
extern int fn_8225E360();
extern int fn_825269D0();
extern unsigned int iStack_40;
extern unsigned int lbl_83265988;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_3c;


void fn_8225DD28(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack0000001c;
  int iStack_40;
  uint uStack_3c;
  
  uStack0000001c = (int)param_2;
  fn_8225E360(&iStack_40,param_1,&stack0x0000001c);
  if ((iStack_40 != *(int *)(param_1 + 4)) &&
     (((param_3 == 0 || (param_3 != *(int *)(iStack_40 + 0x10))) ||
      ((*(char *)(param_3 + 0xd8) == '\0' && (*(int *)(iStack_40 + 0x14) != 0)))))) {
    iVar1 = *(int *)(iStack_40 + 0x10);
    iVar4 = lbl_83265988 - iVar1;
    if (*(int *)(param_1 + 0x60) == 0) {
      for (piVar2 = *(int **)(param_1 + 0x10); piVar2 != *(int **)(param_1 + 0x14);
          piVar2 = piVar2 + 1) {
        iVar5 = iVar1;
        if (iVar1 == *piVar2) goto LAB_8225dddc;
      }
    }
    iVar5 = 0;
LAB_8225dddc:
    fn_8225CB20(param_1,param_2,iVar1 == param_3);
    fn_8225DFB0(&iStack_40,param_1,iStack_40);
    if (((uint)LZCOUNT(iVar4) >> 5 != 0) || (iVar5 != 0)) {
      fn_8225CDB0(param_1,iVar5);
    }
    fn_825269D0(0x45,0);
  }
  if ((param_3 != 0) &&
     (piVar2 = (int *)fn_8225E360(&iStack_40,param_1,&stack0x0000001c),
     *piVar2 == *(int *)(param_1 + 4))) {
    uStack_3c = (uint)*(byte *)(param_3 + 0xd8);
    iStack_40 = param_3;
    puVar3 = (undefined8 *)fn_8225DEB0(param_1,&stack0x0000001c);
    *puVar3 = CONCAT44(iStack_40,uStack_3c);
    fn_8225C900(param_1,param_2);
    fn_825269D0(0x44,0);
    if (*(int *)(param_1 + 0x58) == 0xff) {
      *(int *)(param_1 + 0x58) = (int)param_2;
    }
  }
  return;
}

