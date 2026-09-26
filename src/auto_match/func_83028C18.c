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
extern int fn_82FF3150();
extern int fn_8300DC90();
extern unsigned int lbl_832645D0;


undefined8 fn_83028C18(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  *(undefined1 *)(param_2 + 0x80) = 1;
  *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) >> 7 & 0x3fffff;
  iVar1 = lbl_832645D0;
  if (lbl_832645D0 != 0) {
    iVar3 = *(int *)(param_1 + 0x88);
    if (iVar3 != *(int *)(param_1 + 0x8c)) {
      do {
        cVar2 = fn_8300DC90(iVar1,*(undefined2 *)(*(int *)(iVar3 + 4) + 0x28),
                                  *(undefined2 *)(*(int *)(iVar3 + 4) + 0x2a));
        if (cVar2 != '\0') {
          fn_82FF3150(param_1,*(undefined4 *)(iVar3 + 4),param_2);
        }
        iVar3 = iVar3 + 8;
      } while (iVar3 != *(int *)(param_1 + 0x8c));
    }
  }
  return 1;
}

