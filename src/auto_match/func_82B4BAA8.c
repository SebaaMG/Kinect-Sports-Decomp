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
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern int fn_82AA66A8();
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82B4ABF8();
extern int fn_82B85298();
extern int fn_82B8AB60();
extern unsigned int uStack_30;


void fn_82B4BAA8(int param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  uVar5 = param_2[1];
  uVar1 = uVar5 & 3;
  if ((uVar5 & 3) != 0) {
    if (uVar1 == 1) {
      puVar3 = (uint *)fn_82AD17B0(param_1,*param_2);
      if ((param_2[1] & 0xfffe0000U) != 0) {
        return;
      }
      uVar5 = *puVar3;
      *puVar3 = uVar5 & 0xf1ffffff | 0x2000000;
      uVar5 = (param_2[1] & 0x3fcU) << 3 | uVar5 & 0xf1ffe01f | 0x2000000;
    }
    else {
      if (uVar1 < 3) {
        puVar3 = (uint *)fn_82ACA920(param_1,*param_2,*(undefined4 *)(*param_2 + 0xc));
        uVar5 = *puVar3;
        if ((param_2[1] & 0xfffe0000U) != 0) {
          return;
        }
        *puVar3 = uVar5 & 0xf1ffffff | 0x2000000;
        *puVar3 = ((uVar5 >> 5 & 0xff) >> ((uint)param_2[1] >> 1 & 0x3e) & 3) << 5 |
                  uVar5 & 0xf1ffe01f | 0x2000000;
        return;
      }
      if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      puVar4 = (undefined8 *)*param_2;
      if ((uVar5 >> 0x10 & 1) == 0) goto LAB_82b4bc2c;
      uVar2 = fn_82B4ABF8(param_1,puVar4,*puVar4,0);
      puVar3 = (uint *)fn_82AD17B0(param_1,uVar2);
      uVar5 = *puVar3 & 0xf1ffffff | 0x2000000;
    }
    *puVar3 = uVar5;
    return;
  }
  if ((*(uint *)(param_1 + 0x234) ==
       (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) ||
     (((*(uint *)((uVar5 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) == 0 &&
      ((*(uint *)(param_1 + 0x2c) & 2) == 0)))) {
    puVar4 = (undefined8 *)
             fn_82B8AB60(auStack_20,param_1,(uint)param_2[1] >> 0x11,
                               (uint)param_2[1] >> 2 & 0x3fff);
  }
  else {
    puVar4 = (undefined8 *)
             fn_82B85298(auStack_28,param_1,*(uint *)(param_1 + 0x234),
                               (uint)param_2[1] >> 0x11,(uint)param_2[1] >> 2 & 0x3fff);
  }
  uStack_30 = *puVar4;
  puVar4 = &uStack_30;
LAB_82b4bc2c:
  fn_82B4BAA8(param_1,puVar4);
  return;
}

