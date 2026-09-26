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
extern int fn_82243568();
extern int fn_8236D750();
extern int fn_8265C9E0();
extern int fn_8289A818();
extern unsigned int lbl_820239B8;


void fn_8289AAC0(int param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
  fn_82243568(param_1 + 4,0,uVar1,0);
  if (param_2 == '\0') {
    puVar4 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &lbl_820239B8;
    }
    *(undefined4 **)(param_1 + 0x20) = puVar4;
    puVar4[1] = param_3;
    *(undefined1 *)(puVar4 + 2) = 0;
  }
  else {
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar3 = fn_8289A818(uVar2,*(undefined4 *)(param_1 + 0x18),1);
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  return;
}

