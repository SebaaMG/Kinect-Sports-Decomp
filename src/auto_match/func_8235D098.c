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
extern unsigned int *auStack_3c;
extern int fn_822315A0();
extern int fn_82361DD0();
extern int fn_8241C900();
extern int fn_8265C9E0();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_8235D098(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  *(undefined4 *)(param_1 + 0x174) = 3;
  if ((*(uint *)(param_1 + 0x15d4) != 0 && (*(uint *)(param_1 + 0x15d4) & 0xff000000) < 0x7a000000)
     && ((iVar3 = *(int *)(param_1 + 0xa0), iVar3 == 0 ||
         ((*(int *)(iVar3 + 0x40) != 1 && ((iVar3 == 0 || (*(int *)(iVar3 + 0x40) != 2)))))))) {
    iVar3 = *(int *)(param_1 + 400);
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    uStack_40 = *(undefined4 *)(param_1 + 0x9c);
    auStack_3c[0] = *(undefined4 *)(param_1 + 0x98);
    uStack_4c = 1;
    uStack_48 = 1;
    uStack_44 = 1;
    uVar2 = fn_8265C9E0(0x2010);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82361DD0(uVar2,0xffffffff821abfe4,param_1 + 0x15d4,auStack_3c,&uStack_40,
                                &uStack_44,&uStack_48,&uStack_4c);
    }
    iVar1 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar3;
    *(int *)(param_1 + 0x18c) = iVar3 + 0x10;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    fn_8241C900(*(undefined4 *)(param_1 + 0x2b20),(int *)(param_1 + 0x18c),0);
  }
  return;
}

