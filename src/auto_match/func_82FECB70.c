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
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;


undefined4 * fn_82FECB70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = lbl_832643F4;
  if (*(int *)(param_1 + 100) != 0) {
    for (; puVar2 != lbl_832643F8; puVar2 = puVar2 + 1) {
      for (puVar1 = *(undefined4 **)*puVar2; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[5] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(puVar1[5] + 0xfc) + 8);
        }
        if (*(int *)(iVar3 + 100) == *(int *)(param_1 + 100)) {
          return puVar1;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

