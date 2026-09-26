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
extern int fn_8267C498();
extern int fn_8269CEE0();
extern int fn_82700E40();


void fn_82700F80(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int aiStack_30 [12];
  
  if (*(char *)(param_2 + 7) == '\0') {
    *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_1 + 0xae0);
    iVar4 = *(int *)(param_1 + 0xaf0);
    iVar1 = *(int *)(param_1 + 0xaec);
    iVar2 = *(int *)(param_1 + 0xae8);
    param_2[2] = *(int *)(param_1 + 0xae4);
    param_2[3] = iVar2;
    param_2[4] = iVar1;
    param_2[5] = iVar4;
    *(char *)((int)param_2 + 0x1b) = (char)param_3;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    fn_82700E40(param_1,param_3);
    param_2[1] = -1;
    fn_8269CEE0(aiStack_30,param_1 + 0xad8);
    if (aiStack_30[0] != 0) {
      *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
    }
    if (*param_2 != 0) {
      fn_8267C498();
    }
    *param_2 = aiStack_30[0];
    if (aiStack_30[0] != 0) {
      fn_8267C498(aiStack_30[0]);
      if (*param_2 != 0) {
        uVar3 = 0;
        if (*(uint *)(param_1 + 0xad0) != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(iVar4 + *(int *)(param_1 + 0xacc)) == *param_2) {
              param_2[1] = uVar3;
              break;
            }
            uVar3 = uVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (uVar3 < *(uint *)(param_1 + 0xad0));
        }
      }
    }
    *(undefined1 *)(param_2 + 7) = 1;
  }
  return;
}

