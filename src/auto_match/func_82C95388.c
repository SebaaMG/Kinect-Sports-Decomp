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
extern int fn_82C9EA58();


void fn_82C95388(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  
  lVar2 = 0;
  puVar4 = (uint *)(*(int *)(param_1 + 0x50d0) * *(int *)(param_1 + 0x90) * 0x18 +
                   *(int *)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x55b4) == 0) {
    if (0 < *(int *)(param_1 + 0x8c)) {
      iVar1 = *(int *)(param_1 + 0x88);
      do {
        lVar3 = 0;
        if (0 < iVar1) {
          do {
            fn_82C9EA58(param_1,lVar3,lVar2,*puVar4 >> 8 & 7,puVar4 + 2,
                            puVar4 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -2 + 2,
                            puVar4 + -4,(int)puVar4 + 0xe);
            iVar1 = *(int *)(param_1 + 0x88);
            lVar3 = lVar3 + 1;
            puVar4 = puVar4 + 6;
          } while ((int)lVar3 < iVar1);
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(param_1 + 0x8c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x8c)) {
    iVar1 = *(int *)(param_1 + 0x88);
    do {
      lVar3 = 0;
      if (0 < iVar1) {
        do {
          fn_82C9EA58(param_1,lVar3,lVar2,*puVar4 >> 8 & 7,puVar4 + 2,
                          puVar4 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -2 + 2,puVar4 + -4
                          ,(int)puVar4 + 0xe);
          iVar1 = *(int *)(param_1 + 0x88);
          lVar3 = lVar3 + 1;
          puVar4 = puVar4 + 6;
        } while ((int)lVar3 < iVar1);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

