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
extern int fn_8265C9E0();
extern int fn_8265CE58();
extern int fn_8265CF50();
extern int fn_8265D788();
extern unsigned int lbl_831E7A18;
extern unsigned int lbl_831E7A2C;
extern unsigned int lbl_831E7A98;
extern unsigned int lbl_831E7A9C;
extern unsigned int uStack_c;


void fn_8265CAE0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  
  if (lbl_831E7A18 == '\x01') {
    thunk_FUN_82a2b748(0x4df);
  }
  else {
    thunk_FUN_82a2b748(0);
    iVar1 = fn_8265C9E0(0x20);
    if (iVar1 == 0) {
      uStack_c = 0;
    }
    else {
      uStack_c = fn_8265D788(iVar1,0xffffffff82196582,0);
    }
    lbl_831E7A2C = uStack_c;
    fn_8265CE58(0xffffffff831e7a1c,6,0);
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,0);
    *puVar2 = 0;
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,1);
    *puVar2 = 2;
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,2);
    *puVar2 = 3;
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,3);
    *puVar2 = 6;
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,4);
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,5);
    *puVar2 = 5;
    lbl_831E7A98 = 0x5c;
    lbl_831E7A9C = 0;
    lbl_831E7A18 = '\x01';
  }
  return;
}

