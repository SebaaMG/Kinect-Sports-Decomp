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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_827D50B8();
extern int fn_827D50D0();
extern int fn_827D9C40();
extern unsigned int iStack_1c;


void fn_825BD8D0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x40));
  if (iVar2 == 0x3e4) {
    fn_827D50D0(*(undefined4 *)(param_1 + 0x40));
    fn_827D50D0(*(undefined4 *)(param_1 + 0x50));
  }
  iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x48));
  if ((iVar2 == 0x3e5) || (iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x48)), iVar2 == 0x3e4)) {
    fn_827D50D0(*(undefined4 *)(param_1 + 0x48));
  }
  if ((*(int *)(param_1 + 0x1e8) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x21c), puVar1 != *(undefined4 **)(param_1 + 0x220))) {
    do {
      do {
        puVar3 = (undefined4 *)fn_827D9C40(auStack_20,*puVar1);
        fn_827D50D0(*puVar3);
      } while (iStack_1c == 0);
      fn_822315A0();
    } while( true );
  }
  return;
}

