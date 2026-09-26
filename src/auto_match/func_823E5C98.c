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
extern unsigned int *auStack_120;
extern int fn_823E5F38();
extern int fn_823E6118();
extern int fn_823E6438();
extern int fn_8265BF48();
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_823E5C98(int param_1,int *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint auStack_120 [6];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  auStack_120[0] = fn_8265BF48(0xffffffff821b6a90,0);
  auStack_120[1] = 0;
  auStack_120[2] = 1;
  auStack_120[3] = 3;
  auStack_120[4] = 0xffffffff;
  auStack_120[5] = fn_8265BF48(0xffffffff821b6aac,0);
  uStack_108 = 0;
  uStack_104 = 1;
  uStack_100 = 2;
  uStack_fc = 0xffffffff;
  uStack_f8 = fn_8265BF48(0xffffffff821b6acc,0);
  uStack_f4 = 0;
  uStack_f0 = 3;
  uStack_ec = 2;
  uStack_e8 = 0xffffffff;
  uStack_e4 = fn_8265BF48(0xffffffff821b6ae8,0);
  uStack_e0 = 1;
  uStack_d4 = 0xffffffff;
  uStack_dc = 4;
  uStack_d8 = 6;
  uStack_d0 = fn_8265BF48(0xffffffff821b6b08,0);
  uStack_cc = 3;
  uStack_c8 = 4;
  uStack_c4 = 5;
  uStack_c0 = 6;
  uStack_bc = fn_8265BF48(0xffffffff821b6b28,0);
  uStack_b8 = 2;
  uStack_b4 = 6;
  uStack_b0 = 5;
  uStack_ac = 0xffffffff;
  uStack_a8 = fn_8265BF48(0xffffffff821b6b48,0);
  uStack_a4 = 6;
  uStack_a0 = 1;
  uStack_9c = 2;
  uStack_98 = 0xffffffff;
  uStack_94 = fn_8265BF48(0xffffffff821b6b64,0);
  uStack_84 = 0xffffffff;
  uStack_90 = 6;
  uStack_8c = 1;
  uStack_88 = 2;
  uStack_80 = fn_8265BF48(0xffffffff821b6b80,0);
  uStack_70 = 0xffffffff;
  uStack_7c = 6;
  uStack_78 = 1;
  uStack_74 = 2;
  uVar1 = fn_8265BF48((ulonglong)*(uint *)(*(int *)(param_2[4] * 4 + *param_2) + 0x48) + 0xc,0
                           );
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0xffffffff;
  uVar7 = 0xffffffff;
  do {
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      uVar8 = uVar3;
      if (uVar1 == auStack_120[(uVar4 + uVar2) * 5]) break;
      uVar2 = uVar2 + 1;
      uVar6 = uVar5;
      uVar8 = uVar7;
    } while (uVar2 < 3);
    uVar4 = uVar4 + 3;
    uVar3 = uVar3 + 1;
    uVar5 = uVar6;
    uVar7 = uVar8;
    if (8 < uVar4) {
      if (uVar8 == 0) {
        fn_823E5F38(param_1,param_2,param_3,auStack_120 + uVar6 * 5 + 2);
      }
      else if (uVar8 == 1) {
        fn_823E6118(param_1,param_2,param_3,auStack_120[(uVar6 + 3) * 5 + 1],
                          auStack_120 + (uVar6 + 3) * 5 + 2);
      }
      else if (uVar8 < 3) {
        fn_823E6438(param_1,param_2,param_3,auStack_120[(uVar6 + 6) * 5 + 1],
                          auStack_120 + (uVar6 + 6) * 5 + 2);
      }
      *(uint *)(param_1 + 0xea4) = uVar8;
      *param_4 = auStack_120[(uVar8 * 3 + uVar6) * 5 + 1];
      return;
    }
  } while( true );
}

