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
extern int fn_82681898();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826959C8();
extern unsigned int lbl_82005710;


void fn_8271BCC0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = fn_82695468(param_1,0x1b);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (lbl_82005710 <= *(double *)(iVar3 + 0x30)) {
      fn_82681898(*(undefined4 *)(param_1 + 4));
    }
    else {
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 0;
    }
  }
  return;
}

