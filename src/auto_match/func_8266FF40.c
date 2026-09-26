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
extern int fn_82522ED8();
extern int fn_825B1960();
extern int fn_8266F128();


void fn_8266FF40(int *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 & 0xffffffff) != 0) && (*param_1 != 0)) {
    if ((param_2 & 0xffffffff) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *param_1 + iVar4;
        uVar2 = *(uint *)(iVar3 + 4) & 0x8f;
        if (uVar2 == 4) {
          if ((*(uint *)(iVar3 + 4) >> 6 & 1) == 0) {
            uVar1 = *(undefined4 *)(iVar3 + 8);
          }
          else {
            uVar1 = **(undefined4 **)(iVar3 + 8);
          }
          fn_82522ED8(uVar1);
        }
        else if (uVar2 == 5) {
          fn_825B1960(*(undefined4 *)(iVar3 + 8));
        }
        param_2 = param_2 - 1;
        iVar4 = iVar4 + 0x10;
      } while (param_2 != 0);
    }
    if (*param_1 != 0) {
      fn_8266F128(*param_1,3);
    }
    *param_1 = 0;
  }
  return;
}

