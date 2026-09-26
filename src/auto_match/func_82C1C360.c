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
extern int fn_82C2ECD8();


undefined8 fn_82C1C360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if (*(int *)(param_2 + 0x1bc) != 0) {
    fn_82C2ECD8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x1ac),
                      *(undefined4 *)(param_2 + 0x1b0),*(undefined4 *)(param_2 + 8),
                      *(undefined2 *)(param_2 + 0x76),*(undefined4 *)(param_1 + 0x130));
    iVar2 = **(int **)(param_2 + 8);
    if (1 < *(int *)(param_1 + 0x130)) {
      iVar3 = 1;
      iVar1 = 4;
      do {
        iVar1 = *(int *)(iVar1 + (int)*(int **)(param_2 + 8));
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        sVar4 = (short)iVar3 + 1;
        iVar3 = (int)sVar4;
        iVar1 = iVar3 << 2;
      } while ((int)sVar4 < *(int *)(param_1 + 0x130));
    }
    *(int *)(param_2 + 0x40) = iVar2;
    **(undefined1 **)(*(int *)(param_2 + 0x1a8) + 0x10) = 0;
  }
  return 0;
}

