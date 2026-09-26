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
extern int fn_822315A0();
extern int fn_822AA770();
extern int fn_8236FB68();
extern int fn_823807F0();
extern int fn_82508078();
extern int fn_8288B760();
extern unsigned int lbl_82191118;


void fn_82375058(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_3 + 0x2c) != *(int *)(param_4 + 0x2c)) || ((param_5 != 6 && (param_5 != 7))))
  goto LAB_82375158;
  if ((*(int *)(param_1 + 0x1fc) == 2) &&
     ((*(int *)(param_4 + 0x2ac) == 0 || (lbl_82191118 < *(float *)(param_4 + 0x2a8))))) {
    fn_822AA770(*(undefined4 *)(param_4 + 0x1c));
  }
  lVar2 = fn_8236FB68(0x10);
  if (lVar2 != 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar2,0);
  }
  lVar2 = fn_8236FB68(0x25);
  if (lVar2 != 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar2,0);
  }
  iVar3 = fn_822AA770(*(undefined4 *)(param_3 + 0x1c));
  if (iVar3 == 0) {
LAB_82375138:
    bVar1 = false;
  }
  else {
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar4 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    bVar1 = true;
    if (uVar4 == 0) goto LAB_82375138;
  }
  if ((byte)(!bVar1 + 0x13U) < 0x1e) {
    fn_823807F0(*(undefined4 *)(param_1 + 0x664));
  }
LAB_82375158:
  if (*(int *)(param_3 + 0x24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x7dc) + 0x1c) = 1;
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar3 = (*(int *)(param_3 + 0x2c) * 2 + *(int *)(param_3 + 0x28)) * 0x88 + param_1 + 0xa14;
    *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

