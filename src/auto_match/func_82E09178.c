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
extern int fn_82CE5410();
extern int fn_82E09228();
extern unsigned int lbl_8214A588;
extern unsigned int lbl_832654E4;
extern unsigned int lbl_832654E8;
extern unsigned int lbl_832654EC;


undefined4 * fn_82E09178(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((lbl_832654EC != 0) && (lbl_832654E4 != 0)) && (lbl_832654E8 != 0)) {
    iVar1 = fn_82CE5410();
    puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),8);
    *(undefined2 *)(puVar2 + 1) = 8;
    *puVar2 = &lbl_8214A588;
    *(undefined2 *)((int)puVar2 + 6) = 1;
    fn_82E09228();
    return puVar2;
  }
  return (undefined4 *)0x0;
}

