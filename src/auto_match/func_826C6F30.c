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
extern int fn_826D7038();
extern int fn_826D7728();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_826C6F30(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iStack_60;
  uint uStack_5c;
  
  uVar6 = 0;
  piVar1 = *(int **)(*(int *)(param_2 + 0x1c) + 0xc);
  uVar3 = fn_826D7038(piVar1[8]);
  if (uVar3 != 0) {
    do {
      iStack_60 = 0;
      uStack_5c = 0;
      cVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,&iStack_60,uVar6);
      if ((cVar4 != '\0') && (uVar5 = 0, uStack_5c != 0)) {
        iVar7 = 0;
        do {
          piVar2 = *(int **)(iVar7 + iStack_60);
          cVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
          if (cVar4 == '\0') {
            (**(code **)(*piVar2 + 8))(piVar2,param_1,0);
          }
          else {
            fn_826D7728(piVar2,param_1,param_2,1);
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 < uStack_5c);
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (uVar3 & 0xffffffff));
  }
  *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  return;
}

