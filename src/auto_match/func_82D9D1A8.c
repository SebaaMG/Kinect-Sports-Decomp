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
extern int fn_82CE5410();
extern int fn_82D9D100();


void fn_82D9D1A8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar6 = 0x7f;
  do {
    iVar7 = *(int *)(param_2 + 0x2c) + -1;
    aiStack_40[0] = 0;
    iVar5 = -*(int *)(param_2 + 0x38);
    iVar3 = 0;
    if (iVar5 <= iVar7) {
      do {
        if ((*(int *)(param_2 + 0x2c) <= iVar7) &&
           (iVar7 = *(int *)(param_2 + 0x2c) + -1, iVar7 < iVar5)) {
          return;
        }
        if (iVar7 < 0) {
          uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x34) + (iVar7 + 1) * -4);
        }
        else {
          uVar2 = *(undefined4 *)(iVar7 * 4 + *(int *)(param_2 + 0x28));
        }
        fn_82D9D100(uVar2,iVar6,uVar1,aiStack_40);
        iVar3 = fn_82CE5410();
        cVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x24))(*(int **)(iVar3 + 0x10),uVar1);
        if (cVar4 != '\0') {
          return;
        }
        iVar7 = iVar7 + -1;
        iVar5 = -*(int *)(param_2 + 0x38);
        iVar3 = aiStack_40[0];
      } while (iVar5 <= iVar7);
    }
    iVar6 = iVar3;
    if (iVar3 < 1) {
      return;
    }
  } while( true );
}

