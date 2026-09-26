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
extern unsigned int *auStack_60;
extern int fn_8251E198();
extern int fn_825298E8();
extern int fn_82558B08();
extern int fn_825597C0();
extern int fn_825E8220();


void fn_8251E0B8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [8];
  code *pcStack_58;
  
  iVar6 = param_1[0x3a];
  bVar4 = false;
  if (iVar6 != 0) {
    iVar1 = *param_1;
    iVar5 = fn_825597C0();
    do {
      iVar2 = *(int *)(iVar6 + 4);
      if (*(int *)(iVar6 + 0xb14) == 0) {
        fn_8251E198(param_1,iVar6 + -0x38);
      }
      if ((*(int *)(iVar6 + 0xb14) == 1) || (param_2 != 0)) {
        if (!bVar4) {
          bVar4 = true;
          if (*(int *)(iVar1 + 0x8ac) != 0) {
            piVar3 = *(int **)(*(int *)(iVar1 + 0x8ac) + 0xbab8);
            fn_825E8220(auStack_60,piVar3 + 6);
            do {
            } while (*piVar3 != 0);
            (*pcStack_58)(auStack_60);
          }
        }
        fn_825298E8(iVar6 + -0x38);
      }
      else {
        *(int *)(iVar6 + 0xb14) = *(int *)(iVar6 + 0xb14) + 1;
      }
      if (iVar5 != 0) {
        fn_82558B08();
      }
      iVar6 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}

