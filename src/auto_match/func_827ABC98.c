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
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_827A7D90();


void fn_827ABC98(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  ulonglong uVar6;
  undefined4 *apuStack_40 [4];
  undefined1 auStack_30 [24];
  
  cVar4 = fn_82695468(param_1,0x1f);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if ((uVar6 & 0xffffffff) != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        *puVar1 = 2;
        puVar1[4] = 0;
      }
      else {
        uVar3 = fn_826957D0(param_1,0);
        fn_82695DA0(auStack_30,uVar3);
        fn_82696D38(apuStack_40,auStack_30,*(undefined4 *)(param_1 + 0x18),0xffffffffffffffff,
                          0);
        uVar5 = fn_827A7D90(uVar6 + 0x30,*apuStack_40[0],apuStack_40[0][4]);
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        puVar1[4] = uVar5;
        *puVar1 = 2;
        uVar2 = apuStack_40[0][2];
        apuStack_40[0][2] = (int)((ulonglong)uVar2 - 1);
        if ((ulonglong)uVar2 - 1 == 0) {
          fn_826944C8(apuStack_40[0]);
        }
        fn_82696330(auStack_30);
      }
    }
  }
  return;
}

