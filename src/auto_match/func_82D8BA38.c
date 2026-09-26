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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82D899A0();
extern int fn_82D89BD8();
extern int fn_82DA4850();
extern int fn_82DAEEF8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


void fn_82D8BA38(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x94) == 0) {
      *(undefined4 *)(iVar1 + 0x94) = 1;
      iStack_2c = param_1;
      (**(code **)(**(int **)(iVar1 + 8) + 0x20))(*(int **)(iVar1 + 8),&iStack_2c,1,iVar1,7);
      if (*(int *)(param_1 + 0x10) != 0) {
        fn_82DA4850(&iStack_2c,1,iVar1);
      }
      pcVar3 = (char *)fn_82D899A0(auStack_30,param_1);
      if (*pcVar3 == '\0') {
        if ((*(char *)(iVar1 + 0xd6) != '\0') && (*(char *)(param_1 + 0xe8) != '\x05')) {
          fn_82D89BD8(param_1);
        }
        fn_82DAEEF8(iVar1,param_1);
      }
      piVar2 = *(int **)(iVar1 + 0x5c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,0);
      }
      lVar4 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
      *(int *)(iVar1 + 0x94) = (int)lVar4;
      if ((lVar4 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
        if (*(int *)(iVar1 + 0x8c) != 0) {
          fn_82D80C18(iVar1);
        }
        if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
          fn_82D80C30(iVar1);
        }
      }
    }
    else {
      auStack_28[0] = 0x16;
      iStack_24 = param_1;
      fn_82D80C48(iVar1,auStack_28);
    }
  }
  return;
}

