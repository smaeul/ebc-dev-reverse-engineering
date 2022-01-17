#include "pvi_waveform_v8_v1.04.h"



int get_wf_mode_index(epd_lut_type lut_type)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = global_waveform->mode_version;
  if (bVar1 == 0x19) {
LAB_00100198:
    parse_mode_version::pvi_modes[0] = 0;
    parse_mode_version::pvi_modes[1] = 1;
    parse_mode_version::pvi_modes[2] = 7;
    parse_mode_version::pvi_modes[3] = 2;
    parse_mode_version::pvi_modes[4] = 3;
    parse_mode_version::pvi_modes[5] = 4;
    parse_mode_version::pvi_modes[6] = 5;
    parse_mode_version::pvi_modes[7] = 6;
    parse_mode_version::pvi_modes[8] = 4;
  }
  else {
    if (bVar1 < 0x1a) {
      if (bVar1 == 0x12) {
        parse_mode_version::pvi_modes[0] = 0;
        parse_mode_version::pvi_modes[1] = 1;
        parse_mode_version::pvi_modes[2] = 7;
        parse_mode_version::pvi_modes[3] = 3;
        parse_mode_version::pvi_modes[4] = 3;
        parse_mode_version::pvi_modes[5] = 5;
        parse_mode_version::pvi_modes[6] = 6;
        parse_mode_version::pvi_modes[7] = 4;
        parse_mode_version::pvi_modes[8] = 5;
      }
      else {
        if (bVar1 < 0x13) {
          if (bVar1 != 9) goto LAB_00100248;
          parse_mode_version::pvi_modes[0] = 0;
          parse_mode_version::pvi_modes[1] = 1;
          parse_mode_version::pvi_modes[2] = 1;
          parse_mode_version::pvi_modes[3] = 2;
          parse_mode_version::pvi_modes[4] = 3;
          parse_mode_version::pvi_modes[5] = 3;
          parse_mode_version::pvi_modes[6] = 3;
          parse_mode_version::pvi_modes[7] = 4;
          parse_mode_version::pvi_modes[8] = 3;
        }
        else {
          if (bVar1 == 0x16) {
            parse_mode_version::pvi_modes[0] = 0;
            parse_mode_version::pvi_modes[1] = 1;
            parse_mode_version::pvi_modes[2] = 1;
            parse_mode_version::pvi_modes[3] = 2;
            parse_mode_version::pvi_modes[4] = 3;
            parse_mode_version::pvi_modes[5] = 4;
            parse_mode_version::pvi_modes[6] = 4;
            parse_mode_version::pvi_modes[7] = 6;
            parse_mode_version::pvi_modes[8] = 5;
          }
          else {
            if (bVar1 == 0x18) goto LAB_00100160;
LAB_00100248:
            parse_mode_version::pvi_modes[0] = 0;
            parse_mode_version::pvi_modes[1] = 1;
            parse_mode_version::pvi_modes[2] = 1;
            parse_mode_version::pvi_modes[3] = 2;
            parse_mode_version::pvi_modes[4] = 3;
            parse_mode_version::pvi_modes[5] = 4;
            parse_mode_version::pvi_modes[8] = 4;
            parse_mode_version::pvi_modes[6] = 5;
            parse_mode_version::pvi_modes[7] = 6;
            printk("pvi : Unknow waveform version %x,%x\n",global_waveform->mode_version,
                   global_waveform->wfm_rev);
          }
        }
      }
    }
    else {
      if (bVar1 == 0x23) {
        parse_mode_version::pvi_modes[0] = 0;
        parse_mode_version::pvi_modes[1] = 1;
        parse_mode_version::pvi_modes[2] = 5;
        parse_mode_version::pvi_modes[3] = 2;
        parse_mode_version::pvi_modes[4] = 3;
        parse_mode_version::pvi_modes[5] = 3;
        parse_mode_version::pvi_modes[6] = 3;
        parse_mode_version::pvi_modes[7] = 4;
        parse_mode_version::pvi_modes[8] = 3;
      }
      else {
        if (bVar1 < 0x24) {
          if (bVar1 != 0x20) goto LAB_00100248;
LAB_00100160:
          parse_mode_version::pvi_modes[0] = 0;
          parse_mode_version::pvi_modes[1] = 1;
          parse_mode_version::pvi_modes[2] = 1;
          parse_mode_version::pvi_modes[3] = 2;
          parse_mode_version::pvi_modes[4] = 3;
          parse_mode_version::pvi_modes[5] = 4;
          parse_mode_version::pvi_modes[6] = 5;
          parse_mode_version::pvi_modes[7] = 6;
          parse_mode_version::pvi_modes[8] = 4;
        }
        else {
          if (bVar1 == 0x43) goto LAB_00100198;
          if (bVar1 != 0x54) goto LAB_00100248;
          parse_mode_version::pvi_modes[0] = 0;
          parse_mode_version::pvi_modes[1] = 1;
          parse_mode_version::pvi_modes[2] = 1;
          parse_mode_version::pvi_modes[3] = 2;
          parse_mode_version::pvi_modes[4] = 3;
          parse_mode_version::pvi_modes[5] = 4;
          parse_mode_version::pvi_modes[6] = 4;
          parse_mode_version::pvi_modes[7] = 5;
          parse_mode_version::pvi_modes[8] = 4;
        }
      }
    }
  }
  iVar2 = parse_mode_version::pvi_modes[3];
  if (((lut_type != WF_TYPE_AUTO) && (lut_type != WF_TYPE_GRAY16)) &&
     (iVar2 = parse_mode_version::pvi_modes[7], lut_type != WF_TYPE_A2)) {
    if (lut_type < WF_TYPE_GC16) {
      iVar2 = parse_mode_version::pvi_modes[2];
      if (((lut_type != WF_TYPE_GRAY4) &&
          (iVar2 = parse_mode_version::pvi_modes[1], lut_type != WF_TYPE_GRAY2)) &&
         (iVar2 = parse_mode_version::pvi_modes[0], lut_type != WF_TYPE_RESET)) goto LAB_00100108;
    }
    else {
      iVar2 = parse_mode_version::pvi_modes[4];
      if (((lut_type != WF_TYPE_GL16) &&
          (iVar2 = parse_mode_version::pvi_modes[3], WF_TYPE_GC16 < lut_type)) &&
         ((iVar2 = parse_mode_version::pvi_modes[5], lut_type != WF_TYPE_GLR16 &&
          (iVar2 = parse_mode_version::pvi_modes[6], lut_type != WF_TYPE_GLD16)))) {
LAB_00100108:
        printk("pvi: unspport PVI waveform type");
        return -1;
      }
    }
  }
  return iVar2;
}



int decodewaveform(uchar *data,int maxpic)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uchar uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  u8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  puVar9 = waveformdata;
  if (waveformdata == (u8 *)0x0) {
    printk("waveformdata is NULL\n");
    uVar15 = 0xffffffea;
  }
  else {
    if ((maxpic - 0x10U & 0xffffffef) != 0) {
      return (int)0xffffffea;
    }
    uVar11 = 1;
    uVar14 = 0;
    uVar15 = 0;
    uVar10 = 0;
    uVar12 = 0;
    do {
      uVar13 = (uint)uVar14;
      bVar4 = data[uVar14];
      if (bVar4 == 0xff) {
        if (maxpic != 0x20) {
          return uVar15;
        }
        if (uVar15 == 0) {
          return 0;
        }
        goto LAB_00100520;
      }
      if (bVar4 == 0xfc) {
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 ^ 1;
        bVar4 = data[uVar13];
      }
      iVar6 = uVar15 * 0x10000;
      if (uVar11 == 0) {
        iVar2 = iVar6 + uVar12;
        puVar9[iVar6 + uVar10 * 0x100 + uVar12] = bVar4 & 3;
        puVar9[iVar2 + (uVar10 + 1) * 0x100] = bVar4 >> 2 & 3;
        puVar9[iVar2 + (uVar10 + 2) * 0x100] = bVar4 >> 4 & 3;
        puVar9[iVar2 + (uVar10 + 3) * 0x100] = bVar4 >> 6;
        uVar10 = uVar10 + 4;
        uVar14 = (ulong)(uVar13 + 1);
        if ((uint)maxpic <= uVar10) {
          uVar12 = uVar12 + 1;
          uVar10 = 0;
          if ((uint)maxpic <= uVar12) {
            uVar15 = uVar15 + 1;
            uVar12 = 0;
            uVar10 = uVar11;
          }
        }
      }
      else {
        iVar2 = iVar6 + uVar12;
        puVar9[iVar6 + uVar10 * 0x100 + uVar12] = bVar4 & 3;
        bVar7 = bVar4 >> 2 & 3;
        puVar9[iVar2 + (uVar10 + 1) * 0x100] = bVar7;
        bVar8 = bVar4 >> 4 & 3;
        puVar9[iVar2 + (uVar10 + 2) * 0x100] = bVar8;
        puVar9[iVar2 + (uVar10 + 3) * 0x100] = bVar4 >> 6;
        uVar10 = uVar10 + 4;
        if ((uint)maxpic <= uVar10) {
          uVar12 = uVar12 + 1;
          uVar10 = 0;
          if ((uint)maxpic <= uVar12) {
            uVar15 = uVar15 + 1;
            uVar12 = 0;
          }
        }
        uVar5 = data[uVar13 + 1];
        while (uVar5 != '\0') {
          iVar6 = uVar10 + 1;
          iVar3 = uVar15 * 0x10000 + uVar12;
          iVar2 = uVar10 + 2;
          iVar1 = uVar10 + 3;
          puVar9[uVar15 * 0x10000 + uVar10 * 0x100 + uVar12] = bVar4 & 3;
          uVar10 = uVar10 + 4;
          puVar9[(uint)(iVar3 + iVar6 * 0x100)] = bVar7;
          uVar5 = uVar5 + 0xff;
          puVar9[(uint)(iVar3 + iVar2 * 0x100)] = bVar8;
          puVar9[(uint)(iVar3 + iVar1 * 0x100)] = bVar4 >> 6;
          if ((uint)maxpic <= uVar10) {
            uVar12 = uVar12 + 1;
            uVar10 = 0;
            if ((uint)maxpic <= uVar12) {
              uVar15 = uVar15 + 1;
              uVar12 = 0;
            }
          }
        }
        uVar14 = (ulong)(uVar13 + 2);
        uVar11 = 1;
      }
    } while (uVar15 < 0x100);
    printk("pvi: decodec waveform 19 error\n");
    if (maxpic == 0x20) {
LAB_00100520:
      puVar9 = waveformdata;
      uVar12 = 0;
      do {
        uVar14 = 0;
        iVar6 = uVar12 * 0x10000;
        do {
          uVar10 = 0;
          do {
            uVar13 = uVar10 + iVar6;
            uVar11 = uVar10 >> 1;
            uVar10 = uVar10 + 2;
            puVar9[uVar12 * 0x10000 + (int)(uVar14 >> 1) * 0x100 + uVar11] = puVar9[uVar13];
          } while (uVar10 != 0x20);
          uVar10 = (int)uVar14 + 2;
          uVar14 = (ulong)uVar10;
          iVar6 = iVar6 + 0x200;
        } while (uVar10 != 0x20);
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 < uVar15);
    }
  }
  return (int)uVar15;
}



int FUN_001005ac(int param_1,int param_2)

{
  u8 *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (uint)global_waveform->sc1 + param_1 * 4;
  puVar1 = global_waveform->xwia + (long)iVar3 + -0x1d;
  if ((uint)puVar1[3] ==
      ((uint)puVar1[1] + (uint)puVar1[2] + (uint)global_waveform->xwia[(long)iVar3 + -0x1d] & 0xff))
  {
    iVar3 = ((uint)puVar1[2] << 0x10 | (uint)puVar1[1] << 8 |
            (uint)global_waveform->xwia[(long)iVar3 + -0x1d]) + param_2 * 4;
    puVar1 = global_waveform->xwia + (long)iVar3 + -0x1d;
    if ((uint)puVar1[3] ==
        ((uint)puVar1[1] + (uint)puVar1[2] + (uint)global_waveform->xwia[(long)iVar3 + -0x1d] & 0xff
        )) {
      bVar2 = global_waveform->mode_version;
      uVar4 = (ulong)((uint)puVar1[2] << 0x10 | (uint)puVar1[1] << 8 |
                     (uint)global_waveform->xwia[(long)iVar3 + -0x1d]);
      if (bVar2 < 0x1a) {
        if ((0x17 < bVar2) || (bVar2 == 0x16)) {
LAB_00100670:
          iVar3 = decodewaveform(global_waveform->xwia + (uVar4 - 0x1d),0x20);
          return iVar3;
        }
      }
      else {
        if ((bVar2 == 0x20) || (bVar2 == 0x43)) goto LAB_00100670;
      }
      iVar3 = decodewaveform(global_waveform->xwia + (uVar4 - 0x1d),0x10);
    }
    else {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x1dd);
      iVar3 = -0x16;
    }
  }
  else {
    printk("pvi: %s %d check error\n","get_wf_frm_num",0x1cf);
    iVar3 = -0x16;
  }
  return iVar3;
}



int get_wf_frm_num(int mode,int temp_index)

{
  u8 *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (uint)global_waveform->sc1 + mode * 4;
  puVar1 = global_waveform->xwia + (long)iVar3 + -0x1d;
  if ((uint)puVar1[3] ==
      ((uint)puVar1[1] + (uint)puVar1[2] + (uint)global_waveform->xwia[(long)iVar3 + -0x1d] & 0xff))
  {
    iVar3 = ((uint)puVar1[2] << 0x10 | (uint)puVar1[1] << 8 |
            (uint)global_waveform->xwia[(long)iVar3 + -0x1d]) + temp_index * 4;
    puVar1 = global_waveform->xwia + (long)iVar3 + -0x1d;
    if ((uint)puVar1[3] ==
        ((uint)puVar1[1] + (uint)puVar1[2] + (uint)global_waveform->xwia[(long)iVar3 + -0x1d] & 0xff
        )) {
      bVar2 = global_waveform->mode_version;
      uVar4 = (ulong)((uint)puVar1[2] << 0x10 | (uint)puVar1[1] << 8 |
                     (uint)global_waveform->xwia[(long)iVar3 + -0x1d]);
      if (bVar2 < 0x1a) {
        if ((0x17 < bVar2) || (bVar2 == 0x16)) {
LAB_00100670:
          iVar3 = decodewaveform(global_waveform->xwia + (uVar4 - 0x1d),0x20);
          return iVar3;
        }
      }
      else {
        if ((bVar2 == 0x20) || (bVar2 == 0x43)) goto LAB_00100670;
      }
      iVar3 = decodewaveform(global_waveform->xwia + (uVar4 - 0x1d),0x10);
    }
    else {
      printk("pvi: %s %d check error\n","get_wf_frm_num",0x1dd);
      iVar3 = -0x16;
    }
  }
  else {
    printk("pvi: %s %d check error\n","get_wf_frm_num",0x1cf);
    iVar3 = -0x16;
  }
  return iVar3;
}



int pvi_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture)

{
  byte bVar1;
  byte bVar2;
  int mode_index;
  uint frame_num;
  uint col_index;
  uint row_index;
  int frame_start;
  uint frame_count;
  uint temp_index;
  int row_start;
  uint column;
  int out_index;
  uint col_low_nibble;
  u8 *wf_table;
  
  if (global_waveform == (pvi_waveform *)0x0) {
    return -0x13;
  }
  if ((output == (epd_lut_data *)0x0) && (lRam0000000000000010 == 0)) {
    return -0x16;
  }
  if ((temperture / 3 != pvi_wf_get_lut::sftemp / 3) || (pvi_wf_get_lut::stype != lut_type)) {
    bVar1 = global_waveform->temperaturenumber;
    if (bVar1 == 0) {
LAB_0010076c:
      temp_index = bVar1 - 1;
    }
    else {
      bVar2 = *(byte *)&global_waveform[1].checksum;
      temp_index = 0;
      while ((int)(uint)bVar2 <= temperture) {
        if ((uint)bVar1 == temp_index + 1) goto LAB_0010076c;
        bVar2 = global_waveform->xwia[(long)(int)(temp_index + 0x31) + -0x1d];
        temp_index = temp_index + 1;
      }
    }
    waveformdata = output->wf_table;
    pvi_wf_get_lut::sftemp = temperture;
    pvi_wf_get_lut::stype = lut_type;
    if (lut_type == WF_TYPE_GRAY4) {
      printk("pvi: unsupport WF GRAY4n");
    }
    else {
      if (lut_type < WF_TYPE_GRAY2) {
        if (lut_type == 0) {
          return -1;
        }
      }
      else {
        if (WF_TYPE_GCC16 < lut_type) {
          return -1;
        }
      }
      mode_index = get_wf_mode_index(lut_type);
      frame_num = get_wf_frm_num(mode_index,temp_index);
      if ((int)frame_num < 0) {
        printk("pvi waveform get frame number failed\n");
        return -1;
      }
      output->frame_num = frame_num;
      if (lut_type == WF_TYPE_AUTO) {
        mode_index = get_wf_mode_index(WF_TYPE_GRAY2);
        mode_index = get_wf_frm_num(mode_index,temp_index);
        if (mode_index < 1) {
          printk("Get GRAY2 waveform data failed during AUTO mode\n");
        }
      }
      wf_table = waveformdata;
      if (frame_num != 0) {
        frame_start = 0;
        frame_count = 0;
        do {
          row_index = 0;
          row_start = frame_start;
          do {
            col_index = 0;
            do {
              column = col_index & 0xffff;
              out_index = col_index + row_start;
              col_low_nibble = col_index & 0xf;
              col_index = col_index + 1;
              wf_table[out_index] =
                   (byte)((wf_table[(int)(frame_start + (row_index & 0xf0) * 0x10 + (column >> 4))]
                          & 3) << 2) |
                   wf_table[(int)(col_low_nibble + (row_index & 0xf) * 0x100 + frame_start)] & 3;
            } while (col_index != 0x100);
            row_index = row_index + 1;
            row_start = row_start + 0x100;
          } while (row_index != 0x100);
          frame_count = frame_count + 1;
          frame_start = frame_start + 0x10000;
        } while (frame_num != frame_count);
      }
    }
  }
  return 0;
}



int pvi_wf_input(void *waveform_file)

{
  byte bVar1;
  
  if (global_waveform != (pvi_waveform *)0x0) {
    return -0x10;
  }
  bVar1 = *(byte *)((long)waveform_file + 0x10);
  if (bVar1 < 0x1a) {
    if ((((bVar1 < 0x18) && (bVar1 != 0x12)) && (bVar1 != 0x16)) && (bVar1 != 9)) goto LAB_00100950;
  }
  else {
    if (bVar1 != 0x23) {
      if (bVar1 < 0x24) {
        if (bVar1 != 0x20) goto LAB_00100950;
      }
      else {
        if ((bVar1 != 0x43) && (bVar1 != 0x54)) {
LAB_00100950:
          printk("pvi : Unknow waveform version %x,%x, may be wrong waveform file\n",bVar1,
                 *(undefined *)((long)waveform_file + 0x16));
          return -8;
        }
      }
    }
  }
  global_waveform = (pvi_waveform *)waveform_file;
  return 0;
}



char * pvi_wf_get_version(void)

{
  pvi_waveform *ppVar1;
  long lVar2;
  
  ppVar1 = global_waveform;
  if (global_waveform != (pvi_waveform *)0x0) {
    lVar2 = 0;
    do {
      pvi_wf_get_version::spi_id_buffer[lVar2] = ppVar1[1].xwia[lVar2 + -0xc];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x1f);
    pvi_wf_get_version::spi_id_buffer[31] = '\0';
    return pvi_wf_get_version::spi_id_buffer;
  }
  return (char *)0x0;
}


