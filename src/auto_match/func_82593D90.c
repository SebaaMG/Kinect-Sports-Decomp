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
extern int fn_82598D50();
extern int iRam8326c2bc;
extern unsigned int iStack_20;
extern unsigned int lbl_8326C2AC;
extern unsigned int lbl_8329618C;
extern unsigned int uRam8326c2b4;


undefined8 fn_82593D90(void)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_20;
  int aiStack_1c [3];
  
  if ((lbl_8326C2AC != 1) || (iRam8326c2bc != 0)) {
    return 0;
  }
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar2 != 0) {
    if (lbl_8329618C == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lbl_8329618C + 4);
    }
    if (**(char **)(iVar2 + 0xd48) == '\0') {
      if (lbl_8329618C == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(lbl_8329618C + 4);
      }
      fn_82598D50(uVar1,aiStack_1c,&iStack_20);
      if (aiStack_1c[0] == 0) {
        if (iStack_20 == 0) {
          return 0;
        }
      }
      else if (iStack_20 != 0) {
        uRam8326c2b4 = 0;
        return 1;
      }
      uRam8326c2b4 = 1;
      return 1;
    }
    return 0;
  }
  return 0;
}

