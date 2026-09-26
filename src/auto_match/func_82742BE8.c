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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_82741A50();
extern int fn_82741C18();
extern int fn_82742B70();


void fn_82742BE8(int param_1)

{
  undefined1 *puVar1;
  char cVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_40 [64];
  
  cVar4 = fn_82695468(param_1,0xf);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar6 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 & 0xffffffff) == 0) {
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 0;
    }
    else {
      uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x30,0);
      if ((uVar2 & 0xffffffff) != 0) {
        uVar6 = fn_82742B70(uVar2,*(undefined4 *)(param_1 + 0x18));
      }
      uVar3 = fn_82741A50(auStack_40,uVar5,*(undefined4 *)(param_1 + 0x18));
      fn_82741C18(uVar6,*(undefined4 *)(param_1 + 0x18),uVar3);
      fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar6);
      if ((uVar6 & 0xffffffff) != 0) {
        fn_826824B0(uVar6);
      }
    }
  }
  return;
}

