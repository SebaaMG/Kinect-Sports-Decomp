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
extern unsigned int *auStack_50;
extern int fn_82D7C120();
extern int fn_82DA6530();
extern int fn_83088518();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82D80F08(int param_1,longlong param_2,longlong param_3)

{
  char cVar3;
  char *pcVar1;
  int iVar2;
  longlong lVar4;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    cVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                      (*(int **)(param_1 + 0x58),param_2 + 0x24,param_3 + 0x24);
    if (cVar3 != '\0') {
      pcVar1 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 4))
                                 (auStack_50,*(int *)(param_1 + 0x7c) + 8,param_2 + 0x10,
                                  param_3 + 0x10);
      if ((*pcVar1 != '\0') && (iVar2 = fn_82D7C120(param_2 + 0x10,param_3 + 0x10), iVar2 == 0)) {
        uStack_48 = (undefined4)(param_2 + 0x24);
        uStack_44 = (undefined4)(param_3 + 0x24);
        lVar4 = (ulonglong)*(uint *)(param_1 + 0x7c) + 8;
        if ((ulonglong)*(uint *)(param_1 + 0x7c) == 0) {
          lVar4 = 0;
        }
        fn_83088518(*(undefined4 *)(param_1 + 100),&uStack_48,1,lVar4);
      }
    }
  }
  else {
    uStack_3c = (undefined4)param_2;
    uStack_38 = (undefined4)param_3;
    auStack_40[0] = 0x13;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_40);
  }
  return;
}

