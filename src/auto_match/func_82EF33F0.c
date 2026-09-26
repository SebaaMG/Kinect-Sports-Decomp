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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_50 ((*(U64*)&uStack_50))
extern unsigned int *auStack_40;
extern int fn_82E57888();
extern int fn_82EF2CB8();
extern int fn_82F68CC0();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82EF33F0(int *param_1,int param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  int *piVar5;
  ushort *puStack_80;
  ushort *puStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int aiStack_5c [3];
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong auStack_40 [8];
  
  uVar3 = 0;
  auStack_40[0] = 0;
  if (param_1[3] == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,auStack_40,0);
    if (auStack_40[0] < 0x100000000) {
      *param_4 = (uint)auStack_40[0];
      if (param_3 < (uint)auStack_40[0]) {
        uVar3 = 0xffffffffc00d36b1;
      }
      else {
        uStack_48 = *(undefined8 *)(param_1 + 6);
        _uStack_50 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                              (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                              (uint)*(byte *)((int)param_1 + 0x11) << 8 |
                              (uint)*(byte *)(param_1 + 4),
                              CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8
                                       ,*(ushort *)((int)param_1 + 0x16) << 8 |
                                        *(ushort *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_50,0x10);
        uVar2 = *(ulonglong *)(param_1 + 8);
        uStack_4c = (uint)uVar2;
        uStack_50 = (uint)(uVar2 >> 0x20);
        *(ulonglong *)(param_2 + 0x10) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (ulonglong)(uStack_4c >> 8) & 0xff00 | (ulonglong)(uStack_4c >> 0x18)) << 0x20 |
             ((ulonglong)uStack_50 & 0xff) << 0x18 |
             ((ulonglong)uStack_50 & 0xff00) << 8 |
             (ulonglong)(uStack_50 >> 8) & 0xff00 | (ulonglong)(uStack_50 >> 0x18);
        uStack_48 = *(undefined8 *)(param_1 + 0x14);
        uStack_4c = CONCAT22(*(ushort *)(param_1 + 0x13) << 8 | *(ushort *)(param_1 + 0x13) >> 8,
                             *(ushort *)((int)param_1 + 0x4e) << 8 |
                             *(ushort *)((int)param_1 + 0x4e) >> 8);
        _uStack_50 = CONCAT44((uint)*(byte *)((int)param_1 + 0x4b) << 0x18 |
                              (uint)*(byte *)((int)param_1 + 0x4a) << 0x10 |
                              (uint)*(byte *)((int)param_1 + 0x49) << 8 |
                              (uint)*(byte *)(param_1 + 0x12),uStack_4c);
        fn_82F68CC0(param_2 + 0x18,&uStack_50,0x10);
        uVar2 = 0;
        *(uint *)(param_2 + 0x28) =
             (uint)*(byte *)((int)param_1 + 0x267) << 0x18 |
             (uint)*(byte *)((int)param_1 + 0x266) << 0x10 |
             (uint)*(byte *)((int)param_1 + 0x265) << 8 | (uint)*(byte *)(param_1 + 0x99);
        puVar4 = (ushort *)(param_2 + 0x2c);
        if (param_1[0x99] != 0) {
          piVar5 = param_1 + 0x16;
          do {
            fn_82EF2CB8(piVar5,uVar2,&puStack_7c);
            *puVar4 = *puStack_7c << 8 | *puStack_7c >> 8;
            fn_82EF2CB8(piVar5,uVar2,&iStack_78);
            puVar4[1] = *(ushort *)(iStack_78 + 2) << 8 | *(ushort *)(iStack_78 + 2) >> 8;
            puStack_80 = puVar4 + 2;
            fn_82EF2CB8(piVar5,uVar2,&iStack_74);
            fn_82EF2CB8(piVar5,uVar2,&iStack_70);
            fn_82E57888(&puStack_80,*(undefined4 *)(iStack_70 + 4),
                         (ulonglong)*(ushort *)(iStack_74 + 2) << 1);
            fn_82EF2CB8(piVar5,uVar2,&iStack_6c);
            *puStack_80 = *(ushort *)(iStack_6c + 0xc) << 8 | *(ushort *)(iStack_6c + 0xc) >> 8;
            puStack_80 = puStack_80 + 1;
            fn_82EF2CB8(piVar5,uVar2,&iStack_68);
            fn_82EF2CB8(piVar5,uVar2,&iStack_64);
            fn_82E57888(&puStack_80,*(undefined4 *)(iStack_64 + 8),
                         (ulonglong)*(ushort *)(iStack_68 + 0xc) << 1);
            fn_82EF2CB8(piVar5,uVar2,&iStack_60);
            puVar4 = puStack_80 + 1;
            *puStack_80 = *(ushort *)(iStack_60 + 0x14) << 8 | *(ushort *)(iStack_60 + 0x14) >> 8;
            fn_82EF2CB8(piVar5,uVar2,aiStack_5c);
            fn_82EF2CB8(piVar5,uVar2,&uStack_50);
            uVar1 = *(ushort *)(aiStack_5c[0] + 0x14);
            fn_82F68CC0(puVar4,*(undefined4 *)(uStack_50 + 0x10),(uint)uVar1);
            uVar2 = uVar2 + 1;
            puVar4 = (ushort *)((uint)uVar1 + (int)puVar4);
          } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x99]);
        }
      }
    }
    else {
      uVar3 = 0xffffffffc00d3a9a;
    }
  }
  return uVar3;
}

