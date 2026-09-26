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
extern unsigned int *auStack_30;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826959C8();
extern int fn_82696330();


void fn_82713C60(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  int *piVar6;
  undefined1 auStack_30 [24];
  
  cVar4 = fn_82695468(param_1,10);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef44,0,0);
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 8) + -0x10);
    if (*(int *)(param_1 + 8) == 0) {
      piVar6 = (int *)0x0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = (**(code **)(*piVar6 + 0x10))(auStack_30);
    uVar5 = fn_82695608(uVar3,uVar1);
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    puVar2[4] = uVar5;
    *puVar2 = 2;
    fn_82696330(auStack_30);
  }
  return;
}

