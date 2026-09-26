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
extern int fn_8223DA98();
extern int fn_82F62E30();
extern unsigned int lbl_83263324;


void fn_82F62F60(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 != 0) &&
     (cVar1 = (&lbl_83263324)[iVar2], (&lbl_83263324)[iVar2] = cVar1 + -1, '\0' < (char)(cVar1 + -1)
     )) {
    return;
  }
  fn_82F62E30(param_1);
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8223DA98(*(int *)(param_1 + 0x30),1);
  }
  return;
}

