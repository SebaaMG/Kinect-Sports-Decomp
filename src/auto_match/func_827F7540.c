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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F98C8();
extern int fn_82800A48();
extern int fn_8280CB70();
extern unsigned int uStack_50;


void fn_827F7540(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  uVar4 = fn_827F7210();
  uVar3 = param_2;
  do {
    uVar7 = uVar3 + 1;
    uVar3 = uVar7 & 0xffff;
    uVar6 = uVar3;
    if ((uVar4 & 0xffff) <= uVar3) {
      return;
    }
    do {
      if ((int)uVar6 == (int)param_2) {
        fn_827F98C8(param_1,uVar3,auStack_4c);
        uVar1 = *(uint *)(param_1 + 0xc);
        uVar6 = fn_827F7218(param_1,uVar3);
        fn_827F98C8(param_1,uVar6,auStack_48);
        uVar2 = *(uint *)(param_1 + 0xc);
        fn_82800A48(param_1,uVar3,&uStack_50);
        fn_8280CB70((uVar6 & 0x3ffffff) * 0x40 + (ulonglong)uVar2,uStack_50,
                     (uVar7 & 0xffff) * 0x40 + (ulonglong)uVar1);
        break;
      }
      uVar5 = fn_827F7218();
      uVar6 = uVar5 & 0xffff;
    } while ((uVar5 & 0xffff) != 0xffff);
  } while( true );
}

