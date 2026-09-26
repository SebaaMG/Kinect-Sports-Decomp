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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82E1D900();
extern int fn_82E1D978();
extern int fn_82E1DA50();
extern int fn_82E1DAA8();
extern int fn_82E1DF00();
extern int fn_82E1F7F0();
extern int fn_82F65AC0();


void fn_82E1DFA0(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined1 uVar7;
  
  lVar2 = fn_82E1F7F0(param_2);
  bVar1 = false;
  if (lVar2 != 0) {
    iVar3 = fn_82E1F7F0(param_3);
    iVar4 = fn_82E1D978(param_1,lVar2);
    if (iVar4 == 0) {
      if (iVar3 != 0) {
        puVar5 = (undefined4 *)fn_8265C9E0(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
        }
        *puVar5 = (int)lVar2;
        puVar5[1] = iVar3;
        puVar5[2] = *(undefined4 *)(param_1 + 4);
        puVar5[3] = 0;
        *(undefined4 **)(param_1 + 4) = puVar5;
      }
    }
    else {
      bVar1 = true;
      if (iVar3 == 0) {
        fn_82E1D900(param_1,iVar4);
      }
      else {
        if (*(int *)(iVar4 + 4) != 0) {
          fn_8265CA20();
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(int *)(iVar4 + 4) = iVar3;
      }
    }
    if ((*(char *)(param_1 + 1) != '\0') && (cVar6 = fn_82E1DAA8(param_1,lVar2), cVar6 == '\0')) {
      fn_82E1DA50(param_1,0xffffffff8214b9c4,lVar2);
    }
    iVar3 = fn_82F65AC0(lVar2,0xffffffff8214b880);
    if (iVar3 == 0) {
      uVar7 = fn_82E1DF00(param_1,0xffffffff8214b880,1);
      *(undefined1 *)(param_1 + 1) = uVar7;
    }
    if (bVar1) {
      fn_8265CA20(lVar2);
    }
  }
  return;
}

