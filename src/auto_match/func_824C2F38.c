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
extern int fn_82250A18();
extern int fn_8229E090();
extern int fn_8265C9E0();
extern unsigned int lbl_821C084C;
extern unsigned int lbl_832975B0;


undefined4 * fn_824C2F38(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_8265C9E0(8);
  iVar2 = lbl_832975B0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = *(undefined4 *)(param_2 + 4);
    *puVar1 = &lbl_821C084C;
    if (iVar2 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(int *)(iVar2 + 0x58) != 0) {
      fn_8229E090(*(int *)(iVar2 + 0x58),0,1);
      *(undefined4 *)(iVar2 + 0x58) = 0;
    }
  }
  *param_1 = puVar1;
  return param_1;
}

